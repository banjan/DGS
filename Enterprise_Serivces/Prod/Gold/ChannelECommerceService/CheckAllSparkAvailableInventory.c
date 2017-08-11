CheckAllSparkAvailableInventory()
{
	lr_start_transaction("ECommerceService_CheckAllSparkAvailableInventory");

	web_service_call( "StepName=CheckAllSparkAvailableInventory_101",
		"SOAPMethod=ECommerceService|ECommerceService|CheckAllSparkAvailableInventory",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484871641.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<PartnerKey>165C9CAB-1F1C-41CD-BFA9-39D8B745503A</PartnerKey>"
				"<AllSparkID>1755330 </AllSparkID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ECommerceService_CheckAllSparkAvailableInventory", LR_AUTO);

	return 0;
}
