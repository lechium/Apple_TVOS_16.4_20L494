//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSObject, NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CNContactViewExtensionContext : NSExtensionContext
{
    _Bool _asyncShouldPerformResponse;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_asyncShouldPerformSemaphore;	// 16 = 0x10
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0010000000003040
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0010000000002e85
- (void).cxx_destruct;	// IMP=0x0000000000003947
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *asyncShouldPerformSemaphore; // @synthesize asyncShouldPerformSemaphore=_asyncShouldPerformSemaphore;
@property(nonatomic) _Bool asyncShouldPerformResponse; // @synthesize asyncShouldPerformResponse=_asyncShouldPerformResponse;
- (void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x00000000000038de
- (void)isPresentingFullscreen:(_Bool)arg1;	// IMP=0x0000000000003892
- (void)didDeleteContact:(id)arg1;	// IMP=0x0000000000003820
- (void)didCompleteWithContact:(id)arg1;	// IMP=0x00000000000037ae
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x0000000000003731
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x00000000000035b1
- (void)asyncShouldPerformDefaultActionResponse:(_Bool)arg1;	// IMP=0x000000000000352f
- (void)toggleEditing;	// IMP=0x000000000000348f
- (void)editCancel;	// IMP=0x00000000000033ef
- (void)didChangeToEditMode:(_Bool)arg1;	// IMP=0x0000000000003324
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000031c5
- (id)host;	// IMP=0x00000000000030ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

