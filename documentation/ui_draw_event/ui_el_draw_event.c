
ui_el_draw_event(void *el_v, void *arg)

принимает в себя элементы, которые передаются с помощью прохождения по дереву элементов через бфс, и таким образом сначала рисует текстуру канваса, потом его детей и тд.. дети накладываются на родителя и перекрывают его.

если у элемента есть флаг EL_IS_DEPENDENT - элемент будет обрезаться по родительскому элементу.