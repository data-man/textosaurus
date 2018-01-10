// For license of this file, see <project-root-folder>/LICENSE.md.

#ifndef MARKDOWNSIDEBAR_H
#define MARKDOWNSIDEBAR_H

#include "gui/sidebars/dockwidget.h"

namespace Ui {
  class MarkdownSidebar;
}

class TextApplication;

class MarkdownSidebar : public DockWidget {
  Q_OBJECT

  public:
    explicit MarkdownSidebar(TextApplication* app, QWidget* parent = nullptr);

    virtual Qt::DockWidgetArea initialArea() const override;
    virtual bool initiallyVisible() const override;
    virtual int initialWidth() const override;

  public slots:
    void load();

  private:
    TextApplication* m_textApp;
};

#endif // MARKDOWNSIDEBAR_H