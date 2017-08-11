GetOffer()
{
	lr_start_transaction("OfferService_GetOffer");

	web_service_call( "StepName=GetOffer_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|GetOffer",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483544460.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CouponId>1105228512</CouponId>"
				"<CustomerId>123456789</CustomerId>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_GetOffer", LR_AUTO);

	return 0;
}
