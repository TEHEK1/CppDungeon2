#include "skillDesigns/RangeSkill.h"

namespace enemies {
    namespace CultistAcolyte {
        class EldritchPush : public skillDesigns::RangeSkill {
        public:
            EldritchPush();

            void unsafeTargetUse(int crited, std::shared_ptr<BattleField> battleField,
                                 std::shared_ptr<entity::Entity> actor,
                                 std::shared_ptr<entity::Entity> object) override;

            void unsafeSelfUse(int crited, std::shared_ptr<BattleField> battleField,
                               std::shared_ptr<entity::Entity> object) override;
        };
    } // namespace BrigandFusilier
} // namespace enemies