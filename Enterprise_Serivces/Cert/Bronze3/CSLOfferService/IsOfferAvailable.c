IsOfferAvailable()
{
	lr_start_transaction("OfferService_IsOfferAvailable");

	web_service_call( "StepName=IsOfferAvailable_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|IsOfferAvailable",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483545719.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CampaignID>1065</CampaignID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_IsOfferAvailable", LR_AUTO);

	return 0;
}
