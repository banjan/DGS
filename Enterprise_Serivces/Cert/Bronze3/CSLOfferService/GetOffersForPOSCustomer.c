GetOffersForPOSCustomer()
{
	lr_start_transaction("OfferService_GetOffersForPOSCustomer");

	web_service_call( "StepName=GetOffersForPOSCustomer_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|GetOffersForPOSCustomer",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483545252.inf",
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

	lr_end_transaction("OfferService_GetOffersForPOSCustomer", LR_AUTO);

	return 0;
}
