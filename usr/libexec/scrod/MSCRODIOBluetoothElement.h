//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROIOElement.h>

@class NSString;

@interface MSCRODIOBluetoothElement : SCROIOElement
{
    NSString *_bluetoothAddress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000711b
- (id)bluetoothAddress;	// IMP=0x0010000000007106
- (int)transport;	// IMP=0x00100000000070fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000007069
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000007013
@property(readonly) unsigned long long hash;
- (id)initWithAddress:(id)arg1;	// IMP=0x0010000000006f3c

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

