import logging


class ColorFilter(logging.Filter):
    def __init__(self, schema=None):
        self.schema = schema

    def filter(self, record):
        record.schema = self.schema
        return True


class ColorFormatter(logging.Formatter):
    RESET_SEQ = "\033[0m"
    COLOR_SEQ = "\033[1;%dm"
    BOLD_SEQ = "\033[1m"
    BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE = range(8)
    # https: // en.wikipedia.org / wiki / ANSI_escape_code  # 3-bit_and_4-bit
    # pycharm console opened by RF won't work, VS code terminal is working
    COLORS = {
        'BLACK': BLACK, 
        'RED': RED,
        'GREEN': GREEN,
        'YELLOW': YELLOW,
        'BLUE': BLUE,
        'MAGENTA': MAGENTA,
        'CYAN': CYAN,
        'WHITE': WHITE
    }

    def __init__(self, *args, **kwargs):
        logging.Formatter.__init__(self, *args, **kwargs)

    def format(self, record):
        color_schema = record.schema
        color = self.COLOR_SEQ % (30 +  self.COLORS[color_schema[record.levelname]])
        message = logging.Formatter.format(self, record)
        message = message.replace("$RESET", self.RESET_SEQ) \
            .replace("$BOLD", self.BOLD_SEQ) \
            .replace("$COLOR", color)
        for k, v in self.COLORS.items():
            message = message.replace("$" + k, self.COLOR_SEQ % (v + 30)) \
                .replace("$BG" + k, self.COLOR_SEQ % (v + 40)) \
                .replace("$BG-" + k, self.COLOR_SEQ % (v + 40))
        return message + self.RESET_SEQ
