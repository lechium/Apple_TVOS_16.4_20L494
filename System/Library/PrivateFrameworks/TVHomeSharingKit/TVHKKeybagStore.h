//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface TVHKKeybagStore : NSObject
{
    _Bool _haveRentalJournalCheckinsBeenAttempted;	// 8 = 0x8
    NSString *_rootPath;	// 16 = 0x10
    NSString *_keybagsPath;	// 24 = 0x18
    NSTimer *_keybagCleanUpTimer;	// 32 = 0x20
    NSOperationQueue *_rentalOperationQueue;	// 40 = 0x28
    NSMutableDictionary *_checkedOutRentals;	// 48 = 0x30
    NSString *_rentalJournalPath;	// 56 = 0x38
}

+ (id)_rentalJournalEntryForRentalItem:(id)arg1;	// IMP=0x0060000000009422
+ (void)_updateSentinelWithKeybagPath:(id)arg1;	// IMP=0x0060000000007eb5
+ (void)_eraseKeybagAtPath:(id)arg1;	// IMP=0x0060000000007dd1
+ (void)initializeWithKeybagRootPath:(id)arg1;	// IMP=0x0060000000007730
+ (id)sharedInstance;	// IMP=0x0060000000007681
- (void).cxx_destruct;	// IMP=0x00000000000099bd
@property(nonatomic) _Bool haveRentalJournalCheckinsBeenAttempted; // @synthesize haveRentalJournalCheckinsBeenAttempted=_haveRentalJournalCheckinsBeenAttempted;
@property(retain, nonatomic) NSString *rentalJournalPath; // @synthesize rentalJournalPath=_rentalJournalPath;
@property(retain, nonatomic) NSMutableDictionary *checkedOutRentals; // @synthesize checkedOutRentals=_checkedOutRentals;
@property(retain, nonatomic) NSOperationQueue *rentalOperationQueue; // @synthesize rentalOperationQueue=_rentalOperationQueue;
@property(retain, nonatomic) NSTimer *keybagCleanUpTimer; // @synthesize keybagCleanUpTimer=_keybagCleanUpTimer;
@property(copy, nonatomic) NSString *keybagsPath; // @synthesize keybagsPath=_keybagsPath;
@property(copy, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (void)_cleanupUnusedKeybagsTimerHandler;	// IMP=0x00000000000097cf
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;	// IMP=0x00000000000097bd
- (void)_writeRentalJournal:(id)arg1;	// IMP=0x0000000000009606
- (id)_readRentalJournal;	// IMP=0x000000000000952b
- (void)_removeRentalJournalEntryForRentalItem:(id)arg1;	// IMP=0x0000000000009356
- (void)_addRentalJournalEntryForRentalItem:(id)arg1;	// IMP=0x000000000000923d
- (void)_checkinRentalJournalEntry:(id)arg1;	// IMP=0x000000000000911d
- (void)_checkinJournaledRentals;	// IMP=0x0000000000008e29
- (void)_checkinJournaledRentalsIfNecessary;	// IMP=0x0000000000008d94
- (id)_checkoutRentalItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008ad5
- (id)_checkinRentalItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000878b
- (void)_eraseUnusedKeybags;	// IMP=0x0000000000008372
- (void)_eraseKeybags;	// IMP=0x0000000000008055
- (id)_initWithKeybagRootPath:(id)arg1;	// IMP=0x0000000000007b16
- (id)checkinRentalItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007b04
- (id)checkoutRentalItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007a78
- (void)updateKeybagKeepAliveForMediaServerIdentifier:(id)arg1;	// IMP=0x0000000000007a29
- (id)keybagPathForMediaServerIdentifier:(id)arg1;	// IMP=0x00000000000078d9
- (void)eraseKeybagStore;	// IMP=0x0000000000007813
- (id)init;	// IMP=0x00000000000076c1
- (id)new;	// IMP=0x0000000000007692

@end

