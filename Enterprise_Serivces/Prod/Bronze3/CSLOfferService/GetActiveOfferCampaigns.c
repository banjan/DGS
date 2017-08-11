GetActiveOfferCampaigns()
{
	lr_start_transaction("OfferService_GetActiveOfferCampaigns");

	web_service_call( "StepName=GetActiveOfferCampaigns_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|GetActiveOfferCampaigns",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483544032.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_GetActiveOfferCampaigns", LR_AUTO);

	return 0;
}
