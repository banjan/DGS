GetVersion()
{
	lr_start_transaction("VisitedSiteService_GetVersion");

	web_service_call( "StepName=GetVersion_105",
		"SOAPMethod=VisitedSiteService|BasicHttpBinding_IVisitedSiteService|GetVersion",
		"ResponseParam=response",
		"Service=VisitedSiteService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484171949.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("VisitedSiteService_GetVersion", LR_AUTO);

	return 0;
}
