GetAllOffersForCustomer()
{
	lr_start_transaction("OfferService_GetAllOffersForCustomer");

	web_service_call( "StepName=GetAllOffersForCustomer_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|GetAllOffersForCustomer",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483544218.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>123456789</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_GetAllOffersForCustomer", LR_AUTO);

	return 0;
}
