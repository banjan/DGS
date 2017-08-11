GetVersion()
{
	lr_start_transaction("NonceService_GetVersion");

	web_service_call( "StepName=GetVersion_104",
		"SOAPMethod=NonceService|BasicHttpBinding_INonceService|GetVersion",
		"ResponseParam=response",
		"Service=NonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483628876.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("NonceService_GetVersion", LR_AUTO);

	return 0;
}
