GetVersion()
{
	lr_start_transaction("DigitalCatalogService_GetVersion");

	web_service_call( "StepName=GetVersion_104",
		"SOAPMethod=DigitalCatalogService|ServiceBase_HTTP|GetVersion",
		"ResponseParam=response",
		"Service=DigitalCatalogService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485809791.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("DigitalCatalogService_GetVersion", LR_AUTO);

	return 0;
}
