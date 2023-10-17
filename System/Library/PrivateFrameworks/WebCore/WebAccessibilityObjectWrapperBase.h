//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapperBase : NSObject
{
    void *m_axObject;	// 8 = 0x8
    ObjectIdentifier_098db1e0 _identifier;	// 16 = 0x10
}

+ (void)accessibilitySetShouldRepostNotifications:(_Bool)arg1;	// IMP=0x00600000022db530
- (id).cxx_construct;	// IMP=0x00000000022dc3b0
@property(nonatomic) ObjectIdentifier_098db1e0 identifier; // @synthesize identifier=_identifier;
- (id)outerHTML;	// IMP=0x00000000022db9d0
- (id)innerHTML;	// IMP=0x00000000022db8c0
- (void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000022db560
- (void)accessibilityPostedNotification:(id)arg1;	// IMP=0x00000000022db540
- (id)baseAccessibilityResolvedEditingStyles;	// IMP=0x00000000022db0f0
- (id)accessibilityMathPrescriptPairs;	// IMP=0x00000000022db030
- (id)accessibilityMathPostscriptPairs;	// IMP=0x00000000022dadb0
- (id)accessibilityPlatformMathSuperscriptKey;	// IMP=0x00000000022dada0
- (id)accessibilityPlatformMathSubscriptKey;	// IMP=0x00000000022dad90
- (id)ariaLandmarkRoleDescription;	// IMP=0x00000000022dacf0
- (id)lineRectsAndText;	// IMP=0x00000000022d99c0
- (void *)baseUpdateBackingStore;	// IMP=0x00000000022d9980
- (id)contentForSimpleRange:(const void *)arg1 attributed:(_Bool)arg2;	// IMP=0x00000000022d8780
- (struct CGRect)convertRectToSpace:(const struct FloatRect *)arg1 space:(int)arg2;	// IMP=0x00000000022d8300
- (id)_accessibilityWebDocumentView;	// IMP=0x00000000022d82f0
- (struct _NSRange)accessibilityVisibleCharacterRange;	// IMP=0x00000000022d8210
- (struct CGPath *)convertPathToScreenSpace:(const void *)arg1;	// IMP=0x00000000022d8140
- (id)baseAccessibilityHelpText;	// IMP=0x00000000022d80a0
- (id)accessibilityCustomContent;	// IMP=0x00000000022d7e80
- (id)baseAccessibilitySpeechHint;	// IMP=0x00000000022d7dc0
- (_Bool)isIsolatedObject;	// IMP=0x00000000022d7db0
- (void *)axBackingObject;	// IMP=0x00000000022d7d80
- (id)attachmentView;	// IMP=0x00000000022d7d70
- (_Bool)_prepareAccessibilityCall;	// IMP=0x00000000022d7ce0
- (void)detach;	// IMP=0x00000000022d7cd0
- (void)attachAXObject:(void *)arg1;	// IMP=0x00000000022d7cb0
- (id)initWithAccessibilityObject:(void *)arg1;	// IMP=0x00000000022d7c50

@end
