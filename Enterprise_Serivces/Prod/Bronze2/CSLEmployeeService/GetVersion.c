GetVersion()
{

	lr_start_transaction("EmployeeService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=EmployeeService|BasicHttpBinding_IEmployeeService|GetVersion",
		"ResponseParam=response",
		"Service=EmployeeService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482858661.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("EmployeeService_GetVersion", LR_AUTO);

	return 0;
}
