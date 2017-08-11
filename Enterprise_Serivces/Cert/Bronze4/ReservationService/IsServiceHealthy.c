IsServiceHealthy()
{
	lr_start_transaction("ReservationService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_102",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484168209.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ReservationService_IsServiceHealthy", LR_AUTO);

	return 0;
}
