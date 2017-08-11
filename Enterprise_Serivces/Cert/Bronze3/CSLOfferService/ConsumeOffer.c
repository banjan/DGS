ConsumeOffer()
{
	lr_start_transaction("OfferService_ConsumeOffer");

		web_service_call( "StepName=ConsumeOffer_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|ConsumeOffer",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483486122.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OfferID>abcde</OfferID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("OfferService_ConsumeOffer", LR_AUTO);

	return 0;
}
