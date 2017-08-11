IsServiceHealthy()
{
	lr_start_transaction("OfferService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483546033.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_IsServiceHealthy", LR_AUTO);

	return 0;
}
