ValidateOffer()
{
	lr_start_transaction("OfferService_ValidateOffer");

	web_service_call( "StepName=ValidateOffer_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|ValidateOffer",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483546716.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CouponCode>1105228512</CouponCode>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_ValidateOffer", LR_AUTO);
	
	return 0;
}
