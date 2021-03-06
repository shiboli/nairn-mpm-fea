/******************************************************************************** 
    TransportTask.cpp
    nairn-mpm-fea
    
    Created by John Nairn on 7/18/06.
    Copyright (c) 2006 John A. Nairn, All rights reserved.
********************************************************************************/

#include "stdafx.h"
#include "Custom_Tasks/TransportTask.hpp"

TransportTask *transportTasks=NULL;

#pragma mark INITIALIZE

// Constructors
TransportTask::TransportTask()
{	nextTask=NULL;
}

// Destructor (and it is virtual)
TransportTask::~TransportTask() { }

#pragma mark STANDARD METHODS

// Return name of this task
const char *TransportTask::TaskName(void) { return "transport calculations"; }
