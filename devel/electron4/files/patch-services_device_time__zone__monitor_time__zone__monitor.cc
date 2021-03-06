--- services/device/time_zone_monitor/time_zone_monitor.cc.orig	2019-03-15 06:37:32 UTC
+++ services/device/time_zone_monitor/time_zone_monitor.cc
@@ -41,7 +41,7 @@ void TimeZoneMonitor::NotifyClients() {
 #else
   std::unique_ptr<icu::TimeZone> new_zone(icu::TimeZone::detectHostTimeZone());
 #endif
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // We get here multiple times on Linux per a single tz change, but
   // want to update the ICU default zone and notify renderer only once.
   std::unique_ptr<icu::TimeZone> current_zone(icu::TimeZone::createDefault());
