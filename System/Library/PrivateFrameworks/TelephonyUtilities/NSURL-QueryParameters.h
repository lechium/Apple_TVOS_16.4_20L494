//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (QueryParameters)
+ (id)screenSharingAppURL;	// IMP=0x00100000000142ff
+ (id)faceTimeRefreshShareableContentURLForBundleIdentifier:(id)arg1;	// IMP=0x0010000000012eff
+ (id)faceTimeAppJoinConversationURLForConversationLinkURL:(id)arg1;	// IMP=0x0010000000012d3c
+ (id)faceTimeAppViewLinkDetailsURLForPseudonym:(id)arg1;	// IMP=0x0010000000012bb0
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)arg1;	// IMP=0x0010000000012aea
+ (id)faceTimeUpdateForegroundAppURLForBundleIdentifier:(id)arg1 applicationType:(long long)arg2;	// IMP=0x00100000000128ed
+ (id)faceTimeRefreshShareableContentURL;	// IMP=0x00100000000127e6
+ (id)faceTimeAppJoinConversationLinkURL;	// IMP=0x001000000001273d
+ (id)faceTimeNeedsBackgroundLaunchURL;	// IMP=0x0010000000012694
+ (id)faceTimeAppViewLinkDetailsURL;	// IMP=0x00100000000125eb
+ (id)faceTimeUpdateForegroundAppURL;	// IMP=0x0010000000012542
+ (id)faceTimeShowIncomingTransmissionNoticeUIURL;	// IMP=0x0010000000012499
+ (id)faceTimeShowHandoffEligibleNearbyURL;	// IMP=0x00100000000123f0
+ (id)faceTimeShowSystemCallControlsURL;	// IMP=0x0010000000012347
+ (id)faceTimeShowCarPlayInCallUIURL;	// IMP=0x001000000001229e
+ (id)faceTimeShowInCallUIURL;	// IMP=0x00100000000121f5
+ (id)faceTimeLaunchForOutgoingConversationURL;	// IMP=0x001000000001214c
+ (id)faceTimeLaunchForIncomingCallURL;	// IMP=0x00100000000120a3
+ (id)faceTimePromptURLWithURL:(id)arg1;	// IMP=0x0010000000011fe1
+ (id)faceTimeURLWithURL:(id)arg1;	// IMP=0x0010000000011fbe
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;	// IMP=0x0010000000011e7c
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;	// IMP=0x0010000000011d33
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;	// IMP=0x0010000000011d1f
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;	// IMP=0x0010000000011b72
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0010000000011b59
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0010000000011b3d
+ (id)faceTimeURLWithDestinationID:(id)arg1;	// IMP=0x0010000000011b1c
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x00100000000118da
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0010000000011860
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3 forceAssist:(_Bool)arg4 suppressAssist:(_Bool)arg5 wasAssisted:(_Bool)arg6;	// IMP=0x0010000000014481
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0010000000014463
+ (id)telephonyURLForTelEmergencyCall;	// IMP=0x0010000000072554
+ (id)telephonyURLForVoicemail;	// IMP=0x00100000000724d3
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0010000000072352
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0010000000072290
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;	// IMP=0x0010000000072160
+ (id)telephonyURLWithDestinationID:(id)arg1;	// IMP=0x001000000007214c
+ (id)tu_defaultAllowedSchemes;	// IMP=0x00100000000960f1
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;	// IMP=0x001000000000c03f
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000beee
- (id)tuQueryParameters;	// IMP=0x001000000000ba62
- (id)queryParameters;	// IMP=0x001000000000ba50
- (id)answerRequestSourceIdentifier;	// IMP=0x00100000000142a8
- (_Bool)isAnswerRequestURL;	// IMP=0x001000000001423e
- (_Bool)isFaceTimeNeedsBackgroundLaunchURL;	// IMP=0x00100000000141c2
- (long long)foregroundAppApplicationType;	// IMP=0x001000000001414d
- (id)foregroundAppBundleIdentifier;	// IMP=0x00100000000140f6
- (_Bool)isRefreshShareableContentURL;	// IMP=0x001000000001407a
- (_Bool)isUpdateForegroundAppURL;	// IMP=0x0010000000013ffe
- (_Bool)isShowScreenSharingURL;	// IMP=0x0010000000013fb3
- (_Bool)isShowHandoffEligibleNearbyURL;	// IMP=0x0010000000013f37
- (_Bool)isShowSystemCallControlsURL;	// IMP=0x0010000000013ebb
- (_Bool)isShowCarPlayInCallUIURL;	// IMP=0x0010000000013e3f
- (_Bool)isShowIncomingTransmissionNoticeURL;	// IMP=0x0010000000013dc3
- (_Bool)isShowInCallUIURL;	// IMP=0x0010000000013cff
- (_Bool)isLaunchForOutgoingConversationURL;	// IMP=0x0010000000013c83
- (_Bool)isLaunchForIncomingCallURL;	// IMP=0x0010000000013c07
- (_Bool)isDialCallURL;	// IMP=0x0010000000013bd0
- (_Bool)hasNoPromptOption;	// IMP=0x0010000000013b48
- (id)conversationLinkURLForJoinConversation;	// IMP=0x001000000001389b
- (_Bool)isFaceTimeAppJoinConversationLinkURL;	// IMP=0x001000000001381f
- (id)conversationLinkURLForOpenLinkURL;	// IMP=0x0010000000013572
- (_Bool)isFaceTimeOpenLinkURL;	// IMP=0x0010000000013527
- (id)pseudonymForLinkDetailsView;	// IMP=0x00100000000132af
- (_Bool)isFaceTimeAppViewLinkDetailsURL;	// IMP=0x0010000000013233
- (_Bool)isSystemCallControlsURL;	// IMP=0x00100000000131e8
- (_Bool)isFaceTimeMultiwayURL;	// IMP=0x001000000001319d
- (_Bool)isFaceTimeAudioPromptURL;	// IMP=0x0010000000013152
- (_Bool)isFaceTimeAudioURL;	// IMP=0x00100000000130e6
- (_Bool)isFaceTimePromptURL;	// IMP=0x001000000001309b
- (_Bool)isFaceTimeURL;	// IMP=0x001000000001302f
- (_Bool)_isPhoneNumberID:(id)arg1;	// IMP=0x00100000000117f8
- (id)faceTimeDestinationAccount;	// IMP=0x00100000000116c3
- (id)_mobilePhoneQueryParameters;	// IMP=0x00100000000735d5
- (id)_mobilePhonePathParameters;	// IMP=0x00100000000732da
- (id)telephonyParameterDictionary;	// IMP=0x0010000000073210
@property(readonly) _Bool isVoicemailURL;
@property(readonly) _Bool isEmergencyCallURL;
@property(readonly) _Bool isEmergencyURL;
@property(readonly, nonatomic, getter=isBasebandLogURL) _Bool basebandLogURL;
- (id)webSafeTelephoneURL;	// IMP=0x0010000000072e7b
- (_Bool)isWebSafeTelephoneURL;	// IMP=0x0010000000072d20
@property(readonly, copy, nonatomic) NSString *formattedPhoneNumber;
- (_Bool)_hasScheme:(id)arg1;	// IMP=0x0010000000072b23
- (_Bool)hasTelephonyScheme;	// IMP=0x0010000000072ae3
- (_Bool)isTelephonyPromptURL;	// IMP=0x0010000000072aca
- (_Bool)isTelephonyURL;	// IMP=0x0010000000072a73
- (_Bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;	// IMP=0x0010000000072993
@property(readonly) _Bool wasAlreadyAssisted;
@property(readonly) _Bool suppressAssist;
@property(readonly) _Bool forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int callService;
@property(readonly, nonatomic) int addressBookUID;
@property(readonly) NSString *phoneNumber;
- (id)_destinationIDConvertingNumbersToLatin:(_Bool)arg1;	// IMP=0x00100000000725ce
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1 allowedSchemes:(id)arg2;	// IMP=0x0010000000096230
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000961c5
- (id)sanitizedCopy;	// IMP=0x001000000009615d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
