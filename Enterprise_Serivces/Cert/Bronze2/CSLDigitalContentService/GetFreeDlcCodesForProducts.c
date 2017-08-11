GetFreeDlcCodesForProducts()
{
	lr_start_transaction("DigitalContentService_GetFreeDlcCodesForProducts");

	web_service_call( "StepName=GetFreeDlcCodesForProducts_101",
		"SOAPMethod=DigitalContentService|BasicHttpBinding_IDigitalContentService|GetFreeDlcCodesForProducts",
		"ResponseParam=response",
		"Service=DigitalContentService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482857544.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CampaignProducts>"
					"<CampaignProduct>"
						"<PickupType>DeliverOnPickup</PickupType>"
						"<ProductID>1</ProductID>"
					"</CampaignProduct>"
				"</CampaignProducts>"
				"<CustomerID>1131768783</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("DigitalContentService_GetFreeDlcCodesForProducts", LR_AUTO);

	return 0;
}
