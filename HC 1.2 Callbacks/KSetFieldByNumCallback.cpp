/* =============================================================================	PROJECT:	KSetFieldByNumCallback		FILE:		KSetFieldByNumCallback.cpp		PURPOSE:	Callback to change the contents of a text field.			COPYRIGHT:	(C) Copyright 2001 by M. Uli Kusterer, all rights reserved.					REACH ME AT:				E-MAIL:		witness@weblayout.com				URL:		http://www.weblayout.com/witness		REVISIONS:		2001-07-13	UK		Created.				   ========================================================================== */#pragma mark [Headers]/* --------------------------------------------------------------------------------	Headers:   ----------------------------------------------------------------------------- */#include	"KSetFieldByNumCallback.h"#pragma mark [Globals]/* --------------------------------------------------------------------------------	Globals/Static Variables:   ----------------------------------------------------------------------------- */// Put these li'l critters here.#pragma mark -#pragma mark [Init/Kill]/* --------------------------------------------------------------------------------	� CONSTRUCTOR:		Do some initialization.		TAKES:		-			GIVES:		-		REVISIONS:		2001-07-13	UK		Created.   ----------------------------------------------------------------------------- */KSetFieldByNumCallback::KSetFieldByNumCallback(): KExternalCallback(){	requestCode = xreqSetFieldByNum;}/* --------------------------------------------------------------------------------	� DESTRUCTOR:		Do some cleanup.		REVISIONS:		2001-07-13	UK		Created.   ----------------------------------------------------------------------------- */KSetFieldByNumCallback::~KSetFieldByNumCallback(){	// Do your stuff here!}#pragma mark [Class Methods]/* --------------------------------------------------------------------------------	Run:		Actually do what this callback does. Pass values in and out in inArgs and		outArgs of the XCmdBlock, return an XCMD result in the param block.		TAKES:		-		GIVES:		-		REVISIONS:		2001-07-13	UK		Created.   ----------------------------------------------------------------------------- */void	KSetFieldByNumCallback::Run( XCmdBlockPtr theBlock ){	bool		cardFld;	long		fieldNum;		// Param 1: TRUE for cd fld, FALSE for bg fld:	cardFld = theBlock->inArgs[0];		// Param 2: field number:	fieldNum = theBlock->inArgs[1];		// Do it!	SetFieldByNum( fieldNum, cardFld, (Handle) theBlock->inArgs[2] );		theBlock->result = xresSucc;}