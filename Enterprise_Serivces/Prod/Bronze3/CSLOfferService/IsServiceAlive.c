IsServiceAlive()
{
	lr_start_transaction("OfferService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|IsServiceAlive",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483545917.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_IsServiceAlive", LR_AUTO);

	return 0;
}
