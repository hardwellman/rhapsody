/********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonEdit
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonEdit.cpp
*********************************************************************/

//## auto_generated
#include "ButtonEdit.h"
//## link itsDBGrid
#include "DBGrid.h"
//## link itsForm4Edit
#include "Form4Edit.h"
//## package Default

//## class ButtonEdit
ButtonEdit::ButtonEdit() {
    itsDBGrid = NULL;
    itsForm4Edit = NULL;
}

ButtonEdit::~ButtonEdit() {
    cleanUpRelations();
}

void ButtonEdit::Change() {
    //#[ operation Change()
    //#]
}

int ButtonEdit::getChange() const {
    return Change;
}

void ButtonEdit::setChange(int p_Change) {
    Change = p_Change;
}

DBGrid* ButtonEdit::getItsDBGrid() const {
    return itsDBGrid;
}

void ButtonEdit::setItsDBGrid(DBGrid* p_DBGrid) {
    if(p_DBGrid != NULL)
        {
            p_DBGrid->_setItsButtonEdit(this);
        }
    _setItsDBGrid(p_DBGrid);
}

Form4Edit* ButtonEdit::getItsForm4Edit() const {
    return itsForm4Edit;
}

void ButtonEdit::setItsForm4Edit(Form4Edit* p_Form4Edit) {
    if(p_Form4Edit != NULL)
        {
            p_Form4Edit->_setItsButtonEdit(this);
        }
    _setItsForm4Edit(p_Form4Edit);
}

void ButtonEdit::cleanUpRelations() {
    if(itsDBGrid != NULL)
        {
            ButtonEdit* p_ButtonEdit = itsDBGrid->getItsButtonEdit();
            if(p_ButtonEdit != NULL)
                {
                    itsDBGrid->__setItsButtonEdit(NULL);
                }
            itsDBGrid = NULL;
        }
    if(itsForm4Edit != NULL)
        {
            ButtonEdit* p_ButtonEdit = itsForm4Edit->getItsButtonEdit();
            if(p_ButtonEdit != NULL)
                {
                    itsForm4Edit->__setItsButtonEdit(NULL);
                }
            itsForm4Edit = NULL;
        }
}

void ButtonEdit::__setItsDBGrid(DBGrid* p_DBGrid) {
    itsDBGrid = p_DBGrid;
}

void ButtonEdit::_setItsDBGrid(DBGrid* p_DBGrid) {
    if(itsDBGrid != NULL)
        {
            itsDBGrid->__setItsButtonEdit(NULL);
        }
    __setItsDBGrid(p_DBGrid);
}

void ButtonEdit::_clearItsDBGrid() {
    itsDBGrid = NULL;
}

void ButtonEdit::__setItsForm4Edit(Form4Edit* p_Form4Edit) {
    itsForm4Edit = p_Form4Edit;
}

void ButtonEdit::_setItsForm4Edit(Form4Edit* p_Form4Edit) {
    if(itsForm4Edit != NULL)
        {
            itsForm4Edit->__setItsButtonEdit(NULL);
        }
    __setItsForm4Edit(p_Form4Edit);
}

void ButtonEdit::_clearItsForm4Edit() {
    itsForm4Edit = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonEdit.cpp
*********************************************************************/
