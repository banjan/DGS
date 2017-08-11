IsServiceHealthy()
{
	lr_start_transaction("EmployeeService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=EmployeeService|BasicHttpBinding_IEmployeeService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=EmployeeService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482858875.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("EmployeeService_IsServiceHealthy", LR_AUTO);

	return 0;
}
