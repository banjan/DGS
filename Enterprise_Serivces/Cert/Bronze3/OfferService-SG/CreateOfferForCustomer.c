CreateOfferForCustomer()
{
	lr_start_transaction("OfferService_CreateOfferForCustomer");

	web_service_call( "StepName=CreateOfferForCustomer_102",
		"SOAPMethod=OfferService_vs_1_Ext|offerservicePort|CreateOfferForCustomer",
		"ResponseParam=response",
		"Service=OfferService_vs_1_Ext",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1496689405.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>CarlTest</MachineName>"
				"<CampaignID>3282</CampaignID>"
				"<CustomerID>1239934086</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_CreateOfferForCustomer", LR_AUTO);

	return 0;
}
