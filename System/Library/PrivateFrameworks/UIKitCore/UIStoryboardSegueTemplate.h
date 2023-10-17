//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_segueClassName;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    NSString *_destinationViewControllerIdentifier;	// 32 = 0x20
    SEL _prepareForChildViewControllerSelector;	// 40 = 0x28
    _Bool _performOnViewLoad;	// 48 = 0x30
    _Bool _animates;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x0000000000de8ef2
@property(nonatomic) _Bool animates; // @synthesize animates=_animates;
@property(nonatomic) _Bool performOnViewLoad; // @synthesize performOnViewLoad=_performOnViewLoad;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)perform:(id)arg1;	// IMP=0x0000000000de8dce
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000de8c3e
- (id)_perform:(id)arg1;	// IMP=0x0000000000de8bbe
- (id)segueWithDestinationViewController:(id)arg1;	// IMP=0x0000000000de8a44
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;	// IMP=0x0000000000de899d
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;	// IMP=0x0000000000de8995
- (CDUnknownBlockType)newDefaultPrepareHandlerForSegue:(id)arg1;	// IMP=0x0000000000de898d
@property(readonly, nonatomic) SEL prepareForChildViewControllerSelector;
@property(retain, nonatomic) NSString *customPrepareForChildViewControllerSelectorName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000de885a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000de86a2
- (id)init;	// IMP=0x0000000000de8662

@end

