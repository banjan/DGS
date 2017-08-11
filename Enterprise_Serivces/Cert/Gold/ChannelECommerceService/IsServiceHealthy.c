IsServiceHealthy()
{
	lr_start_transaction("ECommerceService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=ECommerceService|ECommerceService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484881822.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ECommerceService_IsServiceHealthy", LR_AUTO);

	return 0;
}
