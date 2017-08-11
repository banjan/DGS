GetVersion()
{
	lr_start_transaction("ProductService_GetVersion");

	web_service_call( "StepName=GetVersion_103",
		"SOAPMethod=ProductService|ProductServiceHttp|GetVersion",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484777081.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_GetVersion", LR_AUTO);

	return 0;
}
