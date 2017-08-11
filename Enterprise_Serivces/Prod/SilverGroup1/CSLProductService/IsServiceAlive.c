IsServiceAlive()
{
	lr_start_transaction("ProductService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_103",
		"SOAPMethod=ProductService|ProductServiceHttp|IsServiceAlive",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484777143.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_IsServiceAlive", LR_AUTO);

	return 0;
}
