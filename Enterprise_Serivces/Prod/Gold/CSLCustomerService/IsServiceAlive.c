IsServiceAlive()
{
	lr_start_transaction("CustomerService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|IsServiceAlive",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484935076.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_IsServiceAlive", LR_AUTO);

	return 0;
}
