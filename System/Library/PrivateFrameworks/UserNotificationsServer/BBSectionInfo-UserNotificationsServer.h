//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/BBSectionInfo.h>

@interface BBSectionInfo (UserNotificationsServer)
- (id)uns_topicSettings;	// IMP=0x007000000000e53e
- (id)uns_notificationSource;	// IMP=0x007000000000e374
- (void)uns_setPropertiesFromTopicRecord:(id)arg1;	// IMP=0x007000000000e0b4
- (void)uns_setPropertiesFromSourceSettingsDescription:(id)arg1;	// IMP=0x007000000000deca
- (long long)uns_notificationSettingForBBSectionAnnounceSetting:(long long)arg1;	// IMP=0x007000000000deab
- (long long)uns_BBSectionAnnounceSettingForUNNotificationSetting:(long long)arg1;	// IMP=0x007000000000de73
- (long long)uns_BBSectionInfoSettingForUNNotificationSetting:(long long)arg1;	// IMP=0x007000000000de5c
- (long long)uns_notificationSettingForBBSectionInfoSetting:(long long)arg1;	// IMP=0x007000000000de45
- (id)uns_notificationSettings;	// IMP=0x007000000000db94
- (void)uns_setPropertiesFromNotificationSettings:(id)arg1 systemSettings:(id)arg2;	// IMP=0x007000000000d89f
- (void)uns_setPropertiesFromAuthorizationOptions:(unsigned long long)arg1 supportsProvisionalAlerts:(_Bool)arg2;	// IMP=0x007000000000d6b9
@end

