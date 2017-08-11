GetCatalog()
{
	
lr_start_transaction("GetCatalog");
		
		web_service_call( "StepName=GetCatalog_101",
		"SOAPMethod=AllSparkAdminService|BasicHttpBinding_IAllSparkAdminService|GetCatalog",
		"ResponseParam=response",
		"Service=AllSparkAdminService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482243529.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<International nil=\"true\"></International>"
				"<PartnerKey>165C9CAB-1F1C-41CD-BFA9-39D8B745503A</PartnerKey>"
				"<LastModifiedUTC>2016-05-31T13:20:00-05:00</LastModifiedUTC>"
				"<PageNumber>20</PageNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
		
lr_end_transaction("GetCatalog", LR_AUTO);

	return 0;
}
