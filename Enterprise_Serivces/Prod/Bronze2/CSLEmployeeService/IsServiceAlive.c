IsServiceAlive()
{
	lr_start_transaction("EmployeeService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_102",
		"SOAPMethod=EmployeeService|BasicHttpBinding_IEmployeeService|IsServiceAlive",
		"ResponseParam=response",
		"Service=EmployeeService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482858790.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("EmployeeService_IsServiceAlive", LR_AUTO);

	return 0;
}
