from cat_logging import CatLogging


def cat_log( message, level="info"):
    
    logger = CatLogging.getLogger() 
    if level.lower() == "debug":
        logger.debug(message)
    elif level.lower() == "info":
        logger.info(message)
    elif ["warn","warning"].count(level.lower()) > 0:
        logger.warn(message)
    elif level.lower() == "error":
        logger.error(message)
    elif ["critical","fail" ,"fatal"].count(level.lower()) > 0:
        logger.critical(message)
