GetOffersForCustomer()
{
	lr_start_transaction("OfferService_GetOffersForCustomer");

	web_service_call( "StepName=GetOffersForCustomer_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|GetOffersForCustomer",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483544980.inf",
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
	
	lr_end_transaction("OfferService_GetOffersForCustomer", LR_AUTO);

	return 0;
}
