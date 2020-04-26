/********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonAdd
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonAdd.cpp
*********************************************************************/

//## auto_generated
#include "ButtonAdd.h"
//## link itsDBGrid
#include "DBGrid.h"
//## link itsForm3Add
#include "Form3Add.h"
//## package Default

//## class ButtonAdd
ButtonAdd::ButtonAdd() {
    itsDBGrid = NULL;
    itsForm3Add = NULL;
}

ButtonAdd::~ButtonAdd() {
    cleanUpRelations();
}

void ButtonAdd::Add() {
    //#[ operation Add()
    //#]
}

int ButtonAdd::getAdd() const {
    return Add;
}

void ButtonAdd::setAdd(int p_Add) {
    Add = p_Add;
}

DBGrid* ButtonAdd::getItsDBGrid() const {
    return itsDBGrid;
}

void ButtonAdd::setItsDBGrid(DBGrid* p_DBGrid) {
    if(p_DBGrid != NULL)
        {
            p_DBGrid->_setItsButtonAdd(this);
        }
    _setItsDBGrid(p_DBGrid);
}

Form3Add* ButtonAdd::getItsForm3Add() const {
    return itsForm3Add;
}

void ButtonAdd::setItsForm3Add(Form3Add* p_Form3Add) {
    if(p_Form3Add != NULL)
        {
            p_Form3Add->_setItsButtonAdd(this);
        }
    _setItsForm3Add(p_Form3Add);
}

void ButtonAdd::cleanUpRelations() {
    if(itsDBGrid != NULL)
        {
            ButtonAdd* p_ButtonAdd = itsDBGrid->getItsButtonAdd();
            if(p_ButtonAdd != NULL)
                {
                    itsDBGrid->__setItsButtonAdd(NULL);
                }
            itsDBGrid = NULL;
        }
    if(itsForm3Add != NULL)
        {
            ButtonAdd* p_ButtonAdd = itsForm3Add->getItsButtonAdd();
            if(p_ButtonAdd != NULL)
                {
                    itsForm3Add->__setItsButtonAdd(NULL);
                }
            itsForm3Add = NULL;
        }
}

void ButtonAdd::__setItsDBGrid(DBGrid* p_DBGrid) {
    itsDBGrid = p_DBGrid;
}

void ButtonAdd::_setItsDBGrid(DBGrid* p_DBGrid) {
    if(itsDBGrid != NULL)
        {
            itsDBGrid->__setItsButtonAdd(NULL);
        }
    __setItsDBGrid(p_DBGrid);
}

void ButtonAdd::_clearItsDBGrid() {
    itsDBGrid = NULL;
}

void ButtonAdd::__setItsForm3Add(Form3Add* p_Form3Add) {
    itsForm3Add = p_Form3Add;
}

void ButtonAdd::_setItsForm3Add(Form3Add* p_Form3Add) {
    if(itsForm3Add != NULL)
        {
            itsForm3Add->__setItsButtonAdd(NULL);
        }
    __setItsForm3Add(p_Form3Add);
}

void ButtonAdd::_clearItsForm3Add() {
    itsForm3Add = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonAdd.cpp
*********************************************************************/
