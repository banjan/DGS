GetVersion()
{
	lr_start_transaction("OfferService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|GetVersion",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483545389.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_GetVersion", LR_AUTO);

	return 0;
}
