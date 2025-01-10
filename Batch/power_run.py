from pywinauto import application
import time

app = application.Application()
app.connect(title='Global A')
dlg_spec = app.window(title='Global A')
dlg_spec.set_focus()
#dlg_spec.print_control_identifiers()
dlg_spec.child_window(best_match='Run').click()
time.sleep(3)

#dlg_spec.child_window(best_match='Door Closed').click()
#time.sleep(1)
#dlg_spec.child_window(best_match='Door Open').click()
#dlg_spec.minimize()
