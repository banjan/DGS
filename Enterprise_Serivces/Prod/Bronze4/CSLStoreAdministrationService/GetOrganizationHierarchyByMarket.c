GetOrganizationHierarchyByMarket()
{
	lr_start_transaction("StoreAdministrationService_GetOrganizationHierarchyByMarket");

	web_service_call( "StepName=GetOrganizationHierarchyByMarket_101",
		"SOAPMethod=StoreAdministrationService|BasicHttpBinding_IStoreAdministrationService|GetOrganizationHierarchyByMarket",
		"ResponseParam=response",
		"Service=StoreAdministrationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484169743.inf",
		BEGIN_ARGUMENTS,
		"Id=2",
		"IdSpecified=true",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"				
				"</Text>"
			"</MachineName>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>11438173-e912-4900-a126-6a586f6bb6e6</string>"
				"</Text>"
			"</CorrelationID>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreAdministrationService_GetOrganizationHierarchyByMarket", LR_AUTO);

	return 0;
}
