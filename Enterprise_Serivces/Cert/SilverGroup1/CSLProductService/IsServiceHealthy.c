IsServiceHealthy()
{
	lr_start_transaction("ProductService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_103",
		"SOAPMethod=ProductService|ProductServiceHttp|IsServiceHealthy",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484777200.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_IsServiceHealthy", LR_AUTO);

	return 0;
}
