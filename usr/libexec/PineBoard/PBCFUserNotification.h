//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAtomicSignal, NSArray, NSString, NSURL, PBCFUserNotificationWaitViewSpec;

@interface PBCFUserNotification : NSObject
{
    _Bool _alertTopMost;	// 8 = 0x8
    _Bool _noDefaultButton;	// 9 = 0x9
    _Bool _shouldBehaveSuperModally;	// 10 = 0xa
    _Bool _shouldDismissOnUnlock;	// 11 = 0xb
    int _token;	// 12 = 0xc
    int _defaultButtonIndex;	// 16 = 0x10
    int _alternateButtonIndex;	// 20 = 0x14
    int _otherButtonIndex;	// 24 = 0x18
    int _dialogDefaultButtonIndex;	// 28 = 0x1c
    unsigned int _replyPort;	// 32 = 0x20
    int _requestFlags;	// 36 = 0x24
    int _replyFlags;	// 40 = 0x28
    NSString *_PINCodeTitle;	// 48 = 0x30
    NSString *_PINCodeURLSubtitle;	// 56 = 0x38
    NSString *_PINCodeURL;	// 64 = 0x40
    NSString *_PINCodeSubtitle;	// 72 = 0x48
    NSString *_PINCode;	// 80 = 0x50
    NSString *_QRCodeSubtitle;	// 88 = 0x58
    NSString *_QRCodeURL;	// 96 = 0x60
    NSString *_QRCodeTitle;	// 104 = 0x68
    NSString *_dividerText;	// 112 = 0x70
    NSString *_notificationSource;	// 120 = 0x78
    double _timeout;	// 128 = 0x80
    NSURL *_iconURL;	// 136 = 0x88
    NSString *_alertHeader;	// 144 = 0x90
    NSString *_alertMessage;	// 152 = 0x98
    NSString *_defaultButtonTitle;	// 160 = 0xa0
    NSString *_alternateButtonTitle;	// 168 = 0xa8
    NSString *_otherButtonTitle;	// 176 = 0xb0
    NSArray *_selectableItemTitles;	// 184 = 0xb8
    long long _defaultButtonStyle;	// 192 = 0xc0
    long long _alternateButtonStyle;	// 200 = 0xc8
    long long _otherButtonStyle;	// 208 = 0xd0
    NSArray *_textFieldTitles;	// 216 = 0xd8
    NSArray *_textFieldInitialValues;	// 224 = 0xe0
    NSArray *_textFieldEnteredValues;	// 232 = 0xe8
    NSString *_defaultResponseLaunchBundleID;	// 240 = 0xf0
    NSURL *_defaultResponseLaunchURL;	// 248 = 0xf8
    NSString *_accountName;	// 256 = 0x100
    unsigned long long _attemptNumber;	// 264 = 0x108
    PBCFUserNotificationWaitViewSpec *_waitViewSpec;	// 272 = 0x110
    NSArray *_customButtonDefinitions;	// 280 = 0x118
    BSAtomicSignal *_responseSignal;	// 288 = 0x120
    NSArray *_keyboardTypes;	// 296 = 0x128
    NSString *_templateType;	// 304 = 0x130
}

+ (id)_localizedDefaultButtonTitle;	// IMP=0x002000000017b1fa
+ (id)_defaultLocalizationBundle;	// IMP=0x001000000017b0fa
- (void).cxx_destruct;	// IMP=0x002000000017c794
@property(readonly, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(readonly, nonatomic) NSArray *keyboardTypes; // @synthesize keyboardTypes=_keyboardTypes;
@property(readonly, nonatomic) _Bool shouldDismissOnUnlock; // @synthesize shouldDismissOnUnlock=_shouldDismissOnUnlock;
@property(readonly, nonatomic) _Bool shouldBehaveSuperModally; // @synthesize shouldBehaveSuperModally=_shouldBehaveSuperModally;
@property(readonly, nonatomic) BSAtomicSignal *responseSignal; // @synthesize responseSignal=_responseSignal;
@property(readonly, nonatomic) int replyFlags; // @synthesize replyFlags=_replyFlags;
@property(readonly, nonatomic) int requestFlags; // @synthesize requestFlags=_requestFlags;
@property(readonly, nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
@property(readonly, nonatomic) NSArray *customButtonDefinitions; // @synthesize customButtonDefinitions=_customButtonDefinitions;
@property(readonly, nonatomic) PBCFUserNotificationWaitViewSpec *waitViewSpec; // @synthesize waitViewSpec=_waitViewSpec;
@property(readonly, nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(readonly, copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(readonly, nonatomic) NSURL *defaultResponseLaunchURL; // @synthesize defaultResponseLaunchURL=_defaultResponseLaunchURL;
@property(readonly, nonatomic) NSString *defaultResponseLaunchBundleID; // @synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID;
@property(copy, nonatomic) NSArray *textFieldEnteredValues; // @synthesize textFieldEnteredValues=_textFieldEnteredValues;
@property(readonly, copy, nonatomic) NSArray *textFieldInitialValues; // @synthesize textFieldInitialValues=_textFieldInitialValues;
@property(readonly, copy, nonatomic) NSArray *textFieldTitles; // @synthesize textFieldTitles=_textFieldTitles;
@property(readonly, nonatomic) long long otherButtonStyle; // @synthesize otherButtonStyle=_otherButtonStyle;
@property(readonly, nonatomic) long long alternateButtonStyle; // @synthesize alternateButtonStyle=_alternateButtonStyle;
@property(readonly, nonatomic) long long defaultButtonStyle; // @synthesize defaultButtonStyle=_defaultButtonStyle;
@property(readonly, nonatomic) _Bool noDefaultButton; // @synthesize noDefaultButton=_noDefaultButton;
@property(readonly, copy, nonatomic) NSArray *selectableItemTitles; // @synthesize selectableItemTitles=_selectableItemTitles;
@property(readonly, nonatomic) int dialogDefaultButtonIndex; // @synthesize dialogDefaultButtonIndex=_dialogDefaultButtonIndex;
@property(readonly, nonatomic) int otherButtonIndex; // @synthesize otherButtonIndex=_otherButtonIndex;
@property(readonly, nonatomic) int alternateButtonIndex; // @synthesize alternateButtonIndex=_alternateButtonIndex;
@property(readonly, nonatomic) int defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(readonly, copy, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(readonly, copy, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(readonly, copy, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(readonly, nonatomic, getter=isAlertTopMost) _Bool alertTopMost; // @synthesize alertTopMost=_alertTopMost;
@property(readonly, copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(readonly, copy, nonatomic) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) int token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *notificationSource; // @synthesize notificationSource=_notificationSource;
@property(readonly, nonatomic) NSString *dividerText; // @synthesize dividerText=_dividerText;
@property(readonly, nonatomic) NSString *QRCodeTitle; // @synthesize QRCodeTitle=_QRCodeTitle;
@property(readonly, nonatomic) NSString *QRCodeURL; // @synthesize QRCodeURL=_QRCodeURL;
@property(readonly, nonatomic) NSString *QRCodeSubtitle; // @synthesize QRCodeSubtitle=_QRCodeSubtitle;
@property(readonly, nonatomic) NSString *PINCode; // @synthesize PINCode=_PINCode;
@property(readonly, nonatomic) NSString *PINCodeSubtitle; // @synthesize PINCodeSubtitle=_PINCodeSubtitle;
@property(readonly, nonatomic) NSString *PINCodeURL; // @synthesize PINCodeURL=_PINCodeURL;
@property(readonly, nonatomic) NSString *PINCodeURLSubtitle; // @synthesize PINCodeURLSubtitle=_PINCodeURLSubtitle;
@property(readonly, nonatomic) NSString *PINCodeTitle; // @synthesize PINCodeTitle=_PINCodeTitle;
- (long long)_typeForCurrentTemplateKey;	// IMP=0x001000000017c503
- (id)description;	// IMP=0x001000000017c3c6
- (void)cancel;	// IMP=0x001000000017c3ac
- (void)_sendResponse:(unsigned long long)arg1 customButtonResponse:(long long)arg2;	// IMP=0x001000000017bf94
- (void)didSelectButtonAtIndex:(long long)arg1;	// IMP=0x001000000017bdad
- (_Bool)isLastTextField:(long long)arg1;	// IMP=0x001000000017bd58
- (long long)keyboardTypeForTextField:(long long)arg1;	// IMP=0x001000000017bc86
- (_Bool)isSecureTextField:(long long)arg1;	// IMP=0x001000000017bc75
@property(readonly, nonatomic) long long notificationType;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;	// IMP=0x001000000017b2f4
- (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3;	// IMP=0x001000000017b257

@end

