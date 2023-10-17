//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject
{
    AFPreferences *_afPreferences;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000099a3f6
- (void).cxx_destruct;	// IMP=0x000000000099b1b7
@property(retain, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
- (_Bool)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)arg1;	// IMP=0x000000000099af43
- (_Bool)isOnDeviceDictationSupportMissingAssetForLanguage:(id)arg1;	// IMP=0x000000000099ae11
- (_Bool)isOnDeviceDictationSupportAvailableForLanguage:(id)arg1;	// IMP=0x000000000099aa92
- (_Bool)isSmartLanguageSelectionEnabled;	// IMP=0x000000000099aa52
- (id)getOfflineDictationStatusForLanguage:(id)arg1;	// IMP=0x000000000099a81e
- (id)dictationSLSEnabledLanguages;	// IMP=0x000000000099a808
- (void)afPreferencesChanged:(id)arg1;	// IMP=0x000000000099a74e
- (id)languageCode;	// IMP=0x000000000099a738
- (id)manualEndpointingThreshold;	// IMP=0x000000000099a722
- (_Bool)ignoreServerManualEndpointingThreshold;	// IMP=0x000000000099a70c
- (_Bool)suppressDictationOptIn;	// IMP=0x000000000099a6f6
- (_Bool)suppressDataSharingOptIn;	// IMP=0x000000000099a6e0
- (long long)dataSharingOptInStatus;	// IMP=0x000000000099a6ca
- (_Bool)dictationIsEnabled;	// IMP=0x000000000099a6b4
- (id)initSingleton;	// IMP=0x000000000099a45b

@end

