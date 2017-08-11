GetVersion()
{
	lr_start_transaction("ReservationService_GetVersion");

	web_service_call( "StepName=GetVersion_102",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|GetVersion",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484167599.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ReservationService_GetVersion", LR_AUTO);

	return 0;
}
