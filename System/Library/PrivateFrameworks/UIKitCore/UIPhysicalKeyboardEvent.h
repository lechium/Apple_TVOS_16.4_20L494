//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPressesEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPhysicalKeyboardEvent : UIPressesEvent
{
    _Bool _canPrivatize;	// 25 = 0x19
    _Bool _keyCommandHandlingBeforePublic;	// 26 = 0x1a
    _Bool _keyEventForwardedFromInputUIHost;	// 27 = 0x1b
    _Bool _shiftDown;	// 28 = 0x1c
    _Bool __externalEvent;	// 29 = 0x1d
    int _inputFlags;	// 32 = 0x20
    unsigned int _keyCommandCode;	// 36 = 0x24
    NSString *_modifiedInput;	// 40 = 0x28
    NSString *_unmodifiedInput;	// 48 = 0x30
    NSString *_shiftModifiedInput;	// 56 = 0x38
    NSString *_commandModifiedInput;	// 64 = 0x40
    NSString *_markedInput;	// 72 = 0x48
    long long _modifierFlags;	// 80 = 0x50
    NSString *_privateInput;	// 88 = 0x58
    long long _privateModifierFlags;	// 96 = 0x60
    NSString *_privateShiftModifiedInput;	// 104 = 0x68
    NSString *_privateCommandModifiedInput;	// 112 = 0x70
    NSString *_hint;	// 120 = 0x78
    long long __keyCode;	// 128 = 0x80
    long long _source;	// 136 = 0x88
}

+ (id)_eventWithInput:(id)arg1 inputFlags:(int)arg2;	// IMP=0x0010000000cefb65
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000ced4e1
- (void).cxx_destruct;	// IMP=0x0000000000ceff7b
@property(nonatomic, getter=_isExternalEvent) _Bool _externalEvent; // @synthesize _externalEvent=__externalEvent;
@property(nonatomic) _Bool shiftDown; // @synthesize shiftDown=_shiftDown;
@property(nonatomic) _Bool keyEventForwardedFromInputUIHost; // @synthesize keyEventForwardedFromInputUIHost=_keyEventForwardedFromInputUIHost;
@property(nonatomic) _Bool keyCommandHandlingBeforePublic; // @synthesize keyCommandHandlingBeforePublic=_keyCommandHandlingBeforePublic;
@property(nonatomic) unsigned int keyCommandCode; // @synthesize keyCommandCode=_keyCommandCode;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long _keyCode; // @synthesize _keyCode=__keyCode;
@property(retain, nonatomic) NSString *_hint; // @synthesize _hint;
@property(retain, nonatomic) NSString *_privateCommandModifiedInput; // @synthesize _privateCommandModifiedInput;
@property(retain, nonatomic) NSString *_privateShiftModifiedInput; // @synthesize _privateShiftModifiedInput;
@property(nonatomic) long long _privateModifierFlags; // @synthesize _privateModifierFlags;
@property(retain, nonatomic) NSString *_privateInput; // @synthesize _privateInput;
@property(nonatomic) int _inputFlags; // @synthesize _inputFlags;
@property(nonatomic) long long _modifierFlags; // @synthesize _modifierFlags;
@property(retain, nonatomic) NSString *_markedInput; // @synthesize _markedInput;
@property(retain, nonatomic) NSString *_commandModifiedInput; // @synthesize _commandModifiedInput;
@property(retain, nonatomic) NSString *_shiftModifiedInput; // @synthesize _shiftModifiedInput;
@property(retain, nonatomic) NSString *_unmodifiedInput; // @synthesize _unmodifiedInput;
@property(retain, nonatomic) NSString *_modifiedInput; // @synthesize _modifiedInput;
@property(readonly, nonatomic) long long _gsModifierFlags;
- (long long)modifierFlags;	// IMP=0x0000000000cefc95
- (void)_privatize;	// IMP=0x0000000000cefc21
- (id)_cloneEvent;	// IMP=0x0000000000cef823
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cef6fe
- (_Bool)_shouldAttemptSecurePasteAuthentication;	// IMP=0x0000000000cef438
- (_Bool)_matchesKeyCommand:(id)arg1 usesPrivateShiftModifiedInput:(_Bool)arg2;	// IMP=0x0000000000ceec61
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1 keyboard:(struct __GSKeyboard *)arg2;	// IMP=0x0000000000cee14e
@property(readonly, nonatomic) _Bool _isARepeat;
@property(readonly, nonatomic) _Bool _isModifierKey;
- (_Bool)_isPhysicalKeyEvent;	// IMP=0x0000000000cee0ae
@property(readonly, nonatomic) _Bool _isGlobeKey;
@property(readonly, nonatomic) _Bool _isEjectKey;
@property(readonly, nonatomic) _Bool _isKeyDown;
- (long long)type;	// IMP=0x0000000000cedf23
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ceda73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ced4e9

@end

