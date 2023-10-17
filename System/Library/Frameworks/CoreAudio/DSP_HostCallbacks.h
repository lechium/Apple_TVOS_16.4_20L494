//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DSP_HostCallbacks : NSObject
{
    struct DSP_Host_IOProcessor *_owner;	// 8 = 0x8
    function_dd4a833b _mutationRequestListener;	// 16 = 0x10
    function_30e455e6 _propertyChangeListener;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x0000000000176862
- (void).cxx_destruct;	// IMP=0x0000000000176808
@property(nonatomic) struct DSP_Host_IOProcessor *owner; // @synthesize owner=_owner;
@property(nonatomic) function_30e455e6 propertyChangeListener; // @synthesize propertyChangeListener=_propertyChangeListener;
@property(nonatomic) function_dd4a833b mutationRequestListener; // @synthesize mutationRequestListener=_mutationRequestListener;
- (void)requestMutation:(id)arg1;	// IMP=0x000000000017635b
- (void)notifyClientsOfCustomPropertyChange:(struct AudioObjectPropertyAddress)arg1;	// IMP=0x0000000000176260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

