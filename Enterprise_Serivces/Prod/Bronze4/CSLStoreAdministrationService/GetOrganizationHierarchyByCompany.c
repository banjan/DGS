GetOrganizationHierarchyByCompany()
{
	lr_start_transaction("StoreAdministrationService_GetOrganizationHierarchyByCompany");

	web_service_call( "StepName=GetOrganizationHierarchyByCompany_101",
		"SOAPMethod=StoreAdministrationService|BasicHttpBinding_IStoreAdministrationService|GetOrganizationHierarchyByCompany",
		"ResponseParam=response",
		"Service=StoreAdministrationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484169074.inf",
		BEGIN_ARGUMENTS,
		"Id=2",
		"IdSpecified=true",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string nil=\"true\"></string>"
					"<string>\ntest\n</string>"
					"<string>\n</string>"
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

	lr_end_transaction("StoreAdministrationService_GetOrganizationHierarchyByCompany", LR_AUTO);

	return 0;
}
