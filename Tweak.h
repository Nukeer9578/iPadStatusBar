@interface SBStatusBarStateAggregator : NSObject
+(id)sharedInstance;
-(BOOL)_setItem:(int)arg1 enabled:(BOOL)arg2;
-(void)updateStatusBarItem:(int)arg1;
@end


