GetVersion()
{
	lr_start_transaction("ECommerceService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=ECommerceService|ECommerceService|GetVersion",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484881661.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ECommerceService_GetVersion", LR_AUTO);

	return 0;
}
