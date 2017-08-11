IsServiceHealthy()
{
	lr_start_transaction("CustomerService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484935152.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_IsServiceHealthy", LR_AUTO);

	return 0;
}
